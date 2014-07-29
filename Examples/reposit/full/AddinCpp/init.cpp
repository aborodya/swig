
#include "init.hpp"
#include <oh/repository.hpp>
#include <oh/processor.hpp>
#include <oh/enumerations/enumregistry.hpp>
//#include <qlo/enumerations/register/register_all.hpp>
#include "AddinObjects/serialization/serializationfactory.hpp"
#include "AddinObjects/init.hpp"

void FullLibAddinCpp::initializeAddin() {

        // Instantiate the ObjectHandler Repository
        static ObjectHandler::Repository repository;

        //Instantiate the Processor Factory
        static ObjectHandler::ProcessorFactory processorFactory;

        // Instantiate the Serialization Factory
        static FullLibAddin::SerializationFactory factory;

        // Instantiate the Enumerated Type Registry
        static ObjectHandler::EnumTypeRegistry enumTypeRegistry;

        // Instantiate the Enumerated Class Registry
        static ObjectHandler::EnumClassRegistry enumClassRegistry;

        // Instantiate the Enumerated Pair Registry
        static ObjectHandler::EnumPairRegistry enumPairRegistry;

        // Initialize the Enumeration Registry
        FullLibAddin::initializeAddin();
}

